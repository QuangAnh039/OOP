#include <iostream>
#include <cstdlib>  // Required for atoi

using namespace std;

int main(int argc, char *argv[]) {
    int num = atoi(argv[1]);
    printf("%d\ ", num);
    printf("%s\n", argv[1]);
}