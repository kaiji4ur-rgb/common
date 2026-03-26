#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include <cstring>

int chkCoverityTest() {
    struct stCoverityTest {
        unsigned char dim0[4];
        unsigned char dim1[4];
        unsigned char dim2[4];
        unsigned char dim3[4];
    };

    unsigned char arrayCoverityTest[4][4][4][4];
    stCoverityTest structCoverityTestArray[4];

    unsigned char testSrcByteAry4[4] = {'1', '2', '3', '4'};
    unsigned char testSrcByteAry8[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int testSrcInt = 0x12345678;

    memcpy(structCoverityTestArray, testSrcByteAry4, 4);
    memcpy(&(structCoverityTestArray[0]), testSrcByteAry4, 4);
    memcpy(structCoverityTestArray[0].dim0, testSrcByteAry4, 4);
    memcpy(&(structCoverityTestArray[0].dim0[0]), testSrcByteAry4, 4);

    memcpy(structCoverityTestArray, testSrcByteAry8, 8);
    memcpy(&(structCoverityTestArray[0]), testSrcByteAry8, 8);
    memcpy(structCoverityTestArray[0].dim0, testSrcByteAry8, 8);
    memcpy(&(structCoverityTestArray[0].dim0[0]), testSrcByteAry8, 8);

    memcpy(arrayCoverityTest, testSrcByteAry4, 4);
    memcpy(arrayCoverityTest[0], testSrcByteAry4, 4);
    memcpy(arrayCoverityTest[0][0], testSrcByteAry4, 4);
    memcpy(&(arrayCoverityTest[0]), testSrcByteAry4, 4);
    memcpy(&(arrayCoverityTest[0][0]), testSrcByteAry4, 4);
    memcpy(&(arrayCoverityTest[0][0][0]), testSrcByteAry4, 4);

    memcpy(arrayCoverityTest[3], testSrcByteAry4, 4);
    memcpy(arrayCoverityTest[3][0], testSrcByteAry4, 4);
    memcpy(&(arrayCoverityTest[3]), testSrcByteAry4, 4);
    memcpy(&(arrayCoverityTest[3][3]), testSrcByteAry4, 4);
    memcpy(&(arrayCoverityTest[3][3][3]), testSrcByteAry4, 4);
    memcpy(&(arrayCoverityTest[3][3][3][3]), testSrcByteAry4, 4);

    memcpy(arrayCoverityTest, testSrcByteAry8, 8);
    memcpy(arrayCoverityTest[0], testSrcByteAry8, 8);
    memcpy(arrayCoverityTest[0][0], testSrcByteAry8, 8);
    memcpy(&(arrayCoverityTest[0]), testSrcByteAry8, 8);
    memcpy(&(arrayCoverityTest[0][0]), testSrcByteAry8, 8);
    memcpy(&(arrayCoverityTest[0][0][0]), testSrcByteAry8, 8);

    memcpy(arrayCoverityTest, testSrcByteAry8, 8);
    memcpy(arrayCoverityTest[3], testSrcByteAry8, 8);
    memcpy(arrayCoverityTest[3][3], testSrcByteAry8, 8);
    memcpy(&(arrayCoverityTest[3]), testSrcByteAry8, 8);
    memcpy(&(arrayCoverityTest[3][3]), testSrcByteAry8, 8);
    memcpy(&(arrayCoverityTest[3][3][3]), testSrcByteAry8, 8);

    return 0;
}

int main() {
    int result = chkCoverityTest();
    return 0;
}
