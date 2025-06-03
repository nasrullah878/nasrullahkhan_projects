#!bin/bash/
cd ~/Downloads
./cursor-0.xx.x-x86_64.AppImage
./cursor-0.xx.x-x86_64.AppImage --no-sandbox
cursor
sudo su
mv 'Cursor-0.50.5-x86_64 (1).AppImage' cursor.appimage
chmod +x cursor.appimage
./cursor.appimage
sudo apt update
sudo apt install libfuse2
./cursor.appimage --no-sandbox
sudo mv ~/Downloads/cursor.appimage /opt/cursor.appimage
sudo ln -s /opt/cursor.appimage /usr/local/bin/cursor
cursor --no-sandbox
sudo mv ~/Downloads/cursor.appimage /opt/cursor.appimage
cursor
