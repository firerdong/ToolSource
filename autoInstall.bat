set FF=C:\temp\DEST

:unzip software1
.\7z.exe x -o%FF% %1
ren %FF%\software1 software

:unzip software2
.\7z.exe x -o%FF% %2
robocopy %FF%\software2 %FF%\software /e /copyall
rd /Q /S %FF%\software

