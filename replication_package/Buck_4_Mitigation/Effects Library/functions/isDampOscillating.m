function damping_oscillations = isDampOscillating(y)

% y(t) = A*e^(βt)*cos(ωt + ϕ), unknowns A, beta (negative), w, phi

t = (1:length(y));

A0 = max(abs(y));  % Initial estimate of the amplitude
beta0 = -0.01;  % Negative beta for damping oscillations
omega0 = 1;
phi0 = 0;

params0 = [A0, beta0, omega0, phi0]; % Initial estimates for the parameters

% Setting options for lsqcurvefit
options = optimoptions('lsqcurvefit', 'TolFun', 1e-6, 'MaxIterations', 1000, 'Display', 'iter');

% Definition of the model
model = @(params, t) params(1) * exp(params(2) * t) .* cos(params(3) * t + params(4));

% Fitting function
[params_fit, ~] = lsqcurvefit(model, params0, t, y, [], [], options);

% Optimized parameters
beta_fit = params_fit(2);

if beta_fit > 0
    damping_oscillations = 0;
    return
end

% Generate the estimated values
y_fit = model(params_fit, t);

% Calculate R-squared to measure goodness of fit
residuals = y - y_fit;  % Residuals
SSR = sum(residuals.^2); % Sum of Squares of Residuals
SST = sum((y - mean(y)).^2); % Total Sum of Squares
R2 = 1 - SSR / SST;  % R-squared value, indicating fit quality

threshold = 0.9;  % Set a threshold for acceptable R-squared value
% Return 0 for false, 1 for true
damping_oscillations = R2 > threshold; 

end



%%considering just peaks
% y_true_abs = abs(y_fit);
% y_abs = abs(y);

% Find peaks in both functions
% [peaks1, locs1] = findpeaks(y_abs);        % Get peaks and their locations
% [peaks2, locs2] = findpeaks(y_true_abs);  % Get peaks and their locations
% 
% % Define a threshold for matching peaks (in terms of location)
% threshold = 0.5;  
% 
% % Initialize an array to store differences
% diff = [];  % Use an empty array for dynamic allocation
% 
% % Loop through each peak in peaks1 and find corresponding peaks in peaks2
% for i = 1:length(peaks1)
%     % Find peaks in peaks2 that are within the threshold of the current peak in peaks1
%     idx = find(abs(locs1(i) - locs2) <= threshold);
% 
%     % If there are matching peaks, calculate the difference
%     if ~isempty(idx)
%         % Use the first matching peak (you could also average or choose based on other criteria)
%         diff(end + 1) = abs(peaks1(i) - peaks2(idx(1)));  % Calculate the absolute difference
%     end
% end


% Define the threshold value
% threshold = 0.1 * max(abs(y));  % example threshold as 10% of the maximum of y
% 
% % Count how many points are within the threshold
% points_within_threshold = sum(diff <= threshold);
% total_points = length(diff);
% 
% % Calculate the percentage
% percentage_within_threshold = (points_within_threshold / total_points) * 100;
% 
% % Define a minimum acceptable percentage threshold
% min_percentage = 80;  % Minimum acceptable percentage threshold
% if percentage_within_threshold > min_percentage
%     damping_oscillations = 1;
%     disp('The function is convergent according to the established criterion.');
% else
%     damping_oscillations = 0;
%     disp('The function is not convergent according to the established criterion.');
% end


% % peaks = findpeaks(y);
% % 
% % % Verifica se ci sono almeno 2 picchi per determinare le proprietà
% % % oscillatorie
% % if length(peaks) < 2
% %     oscillazioni_smorzate = 0;
% %     return;
% % end
% % 
% % %se i picchi seguono un andamento esponenziale negativo, il loro logaritmo
% % %segue un andamento lineare
% % oscillazioni_smorzate = isExpDivergent(peaks); 
% % 
% % end