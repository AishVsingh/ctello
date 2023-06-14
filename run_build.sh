rm -r ./build
mkdir build
cd build
cmake -S .. -B .
make
sudo make install
