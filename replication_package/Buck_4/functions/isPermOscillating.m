function permanent_oscillations = isPermOscillating(y)
% y(t) = A*cos(ωt + ϕ), unknowns A, w, phi


% FIRST ALTERNATIVE
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

if abs(beta_fit) > 10^-9
    permanent_oscillations = 0;
    return
end

% Calculate fitted values using the optimized parameters
y_fit = model(params_fit, t);

% % Plot the data and the fit
figure;
plot(t, y, 'o', 'DisplayName', 'Original data');
hold on;
plot(t, y_fit, '-', 'DisplayName', 'Curve fit');
legend;
xlabel('Time t');
ylabel('y(t)');
title('Oscillating curve fitting');

% Calculate R-squared to measure goodness of fit
residuals = y - y_fit;  % Residuals
SSR = sum(residuals.^2); % Sum of Squares of Residuals
SST = sum((y - mean(y)).^2); % Total Sum of Squares
R2 = 1 - SSR / SST;  % R-squared value, indicating fit quality

threshold = 0.9;  % Set a threshold for acceptable R-squared value
% Return 0 for false, 1 for true
permanent_oscillations = R2 > threshold;  

% % Calculate the Fourier transform of the signal
% Y_fft = fft(y);
% N = length(y);
% 
% % Calculate the power spectrum
% P2 = abs(Y_fft / N);
% P1 = P2(1:N/2+1);
% P1(2:end-1) = 2*P1(2:end-1);
% 
% % Find the dominant frequency
% [~, idx] = max(P1);
% 
% % Check if there is a well-defined dominant frequency (stable oscillation)
% if idx > 1 && idx < N/2
%     permanent_oscillations = true;  % Stable oscillation detected
% else
%     permanent_oscillations = false; % No stable oscillation detected
% end


%__________________________________________
%SECOND ALTERNATIVE
% t = (1:length(y));
% 
% A0 = max(abs(y));  % Initial estimate of the amplitude
% beta0 = 0;
% omega0 = 1;
% phi0 = 0;
% 
% params0 = [A0, beta0, omega0, phi0]; % Initial estimates for the parameters
% 
% % Setting options for lsqcurvefit
% options = optimoptions('lsqcurvefit', 'TolFun', 1e-6, 'MaxIterations', 1000, 'Display', 'iter');
% 
% % Definition of the model
% model = @(params, t) params(1) .* cos(params(2) * t + params(3));
% 
% % Fitting function
% [params_fit, resnorm] = lsqcurvefit(model, params0, t, y, [], [], options);
% 
% %Check the estimated amplitude for consistency
% if params_fit(1) < 0
%     permanent_oscillations = 0;
%     return;
% end
% 
% % Optimized parameters
% A_fit = params_fit(1);
% beta_fit = params_fit(2);
% omega_fit = params_fit(3);
% phi_fit = params_fit(4);
% 
% if(abs(beta_fit) > 10^-9)
%     permanent_oscillations = 0;
%     return;
%     beta_fit = 0;
% end
% 
% % Generate the estimated values
% y_fit = A_fit * exp(beta_fit * t) .* cos(omega_fit * t + phi_fit);
% 
% %Plot the data and the fit
% figure;
% plot(t, y, 'o', 'DisplayName', 'Original data');
% hold on;
% plot(t, y_fit, '-', 'DisplayName', 'Curve fit');
% legend;
% xlabel('Time t');
% ylabel('y(t)');
% title('Oscillating curve fitting');
% 
% %%considering just peaks
% 
% y_true_abs = abs(y_fit);
% y_abs = abs(y);
% 
% % Find peaks in both functions
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
% 
% 
% % Define the threshold value
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
%     permanent_oscillations = 1;
%     %The function is divergent according to the established criterion.
% else
%     permanent_oscillations = 0;
%     %The function is not divergent according to the established criterion.
% end


% THIRD ALTERNATIVE 
% % % peaks = findpeaks(y);
% % % 
% % % % Estrai i valori positivi
% % % positivi = peaks(peaks > 0);
% % % 
% % % % Indici dei valori positivi
% % % indici = 1:length(positivi);
% % % 
% % % % Adatta una retta ai dati
% % % coeff = polyfit(indici, positivi, 1);  % Regressione lineare
% % % 
% % % % Calcola i valori stimati dalla retta
% % % valori_stimati = polyval(coeff, indici);
% % % 
% % % % Plot per visualizzare l'andamento
% % % figure;
% % % plot(indici, positivi, 'o', 'DisplayName', 'Valori positivi');
% % % hold on;
% % % plot(indici, valori_stimati, '-', 'DisplayName', 'Regressione lineare');
% % % legend;
% % % xlabel('Indice');
% % % ylabel('Valori positivi');
% % % title('Verifica dell andamento lineare');
% % % 
% % % % Calcola il coefficiente di determinazione (R²)
% % % SS_res = sum((positivi - valori_stimati).^2);  % Somma dei quadrati dei residui
% % % SS_tot = sum((positivi - mean(positivi)).^2);  % Somma totale dei quadrati
% % % R2 = 1 - SS_res/SS_tot;
% % % 
% % % threshold = 0.9;
% % % %0 false, 1 true
% % % oscillazioni_permanenti = sum(R2 > threshold) < 1;

end
