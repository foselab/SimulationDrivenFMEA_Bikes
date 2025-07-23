function isExp = isExpDivergent(y)

% Exponential model function
    model = @(params, t) params(1) * exp(params(2) * t);
    
    % Create a vector of indices for x-axis
    t = 1:length(y);
    
    % Initial guess for parameters [A, B] in the model A * exp(B * x)
    params0 = [0.1, 0.01];
    
    % Use lsqcurvefit to fit the exponential model to the data
    options = optimoptions('lsqcurvefit', 'Display', 'off');
    params_fit = lsqcurvefit(model, params0, t, y, [], [], options);
    
    % Calculate fitted values using the optimized parameters
    y_fit = model(params_fit, t);
    
    % Calculate R-squared to measure goodness of fit
    residuals = y - y_fit;  % Residuals
    SSR = sum(residuals.^2); % Sum of Squares of Residuals
    SST = sum((y - mean(y)).^2); % Total Sum of Squares
    R2 = 1 - SSR / SST;  % R-squared value, indicating fit quality

    threshold = 0.9;  % Set a threshold for acceptable R-squared value
    % Return 0 for false, 1 for true
    isExp = R2 > threshold;  % If R2 is below threshold, isExp = 1 (exponential trend)
end

%  SECOND ALTERNATIVE
% % If the function y follows an exponential trend, then its logarithm
% % should exhibit a linear trend.
% ln_y = log(y);  % Take the natural logarithm of y
% x = (1:length(y))';  % Create a vector of indices for x-axis
% 
% % Visual check for linearity
% % fig_linexp = figure;
% % set(fig_linexp, 'Name', 'Exponential Logarithmic Linearity')
% % plot(x, ln_y);
% % xlabel('x');
% % ylabel('ln y');
% % title('Logarithmic Transformation of the Function');
% % grid on;
% 
% % Analytical check for linearity
% coeffs = polyfit(x, ln_y, 1);  % Perform a linear fit to the transformed data
% y_log_fit = polyval(coeffs, x);  % Evaluate the fitted line at each x
% 
% % Calculate R-squared to measure goodness of fit
% SST = sum((ln_y - mean(ln_y)).^2);  % Total Sum of Squares
% SSR = sum((ln_y - y_log_fit).^2);   % Sum of Squares of Residuals
% R2 = 1 - SSR / SST;  % R-squared value, indicating fit quality
% 
% threshold = 0.9;  % Set a threshold for acceptable R-squared value
% % Return 0 for false, 1 for true
% isExp = sum(R2 > threshold) < 1;  % If R2 is below threshold, isExp = 1 (exponential trend)
% 
% end