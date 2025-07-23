function blkStruct = slblocks
    blkStruct.Name = 'Effects Library'; 
    blkStruct.OpenFcn = 'mweffectlib'; 
    blkStruct.MaskDisplay = 'disp(''mweffectlib'')';

    % Aggiungi automaticamente la cartella delle funzioni al percorso
    addpath(genpath(fullfile(fileparts(mfilename('fullpath')), 'functions')));
end
