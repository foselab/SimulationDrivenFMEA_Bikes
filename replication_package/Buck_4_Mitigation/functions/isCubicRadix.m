function isCubicRad = isCubicRadix(y)
    % Create a vector of indices for t-axis
    t = 1:length(y);

    % Cubic radix model function
    model = @(params, t) params(1) * nthroot(params(2) * (x - params(3)), 3) + params(4);
    
    % Initial guess for parameters in the model 
    A0 = std(y);
    H0 = mean(t);
    B0 = 1;
    K0 = mean(y);
    params0 = [A0, H0, B0, K0];
    
    % Use lsqcurvefit to fit the model to the data
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
    isCubicRad = R2 > threshold; 
end

