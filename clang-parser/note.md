### Docker:
docker run -v "$PWD/shared":/share -ti --name <container name> <image ID> bash
(`docker run -it --memory=100G --name dxie_binary -v /local2/xie342/shared/:/share danning_binary:latest`)
docker exec -ti <container name> zsh


### In docker container
apt-get update
apt-get install sudo
sudo apt-get install ssh


passwd  // to set a password
vim /etc/ssh/sshd_config
PermitRootLogin yes


sudo apt-get install libclang-12-dev
sudo apt-get install build-essential clang-12 
sudo apt install llvm-12
sudo apt install llvm-12-dev
sudo apt-get install protobuf-compiler
sudo apt-get install libprotobuf-dev
sudo apt-get install cmake
sudo apt-get install apt-get install nlohmann-json3-dev

### Execute the program
cd clang-parser 
mkdir build
cd build 
cmake .. 
make (-j8)
./var-extractor <c/cpp file name>


