function runge = isRunge(y)
    
    % Create a vector of indices for t-axis
    t = 1:length(y);

    % Runge model function
    model = @(params, x) params(1) ./ (1 + params(2) * (x - params(3)).^2) + params(4);

    params0 = [1, 1, 0, 0];
    
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
    runge = R2 > threshold; 
end


