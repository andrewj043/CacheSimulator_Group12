#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Calculations
int blockReturn(int cache, int block){
        return cache/block;
}
int tagReturn(int block){
        return log2(block);
}
int indexReturn(int numBlocks, int associativity){
        int numSets = numBlocks / associativity;
        return log2(numSets);
}
int numRows(int numBlocks, int associativity){
        return numBlocks / associativity;
}
int overheadSize(){
        //Fill in
}
double cost(){
        //Fill in
}
int numPhysPages(){
        //Fill in
}
int numPagesSys(){
        //Fill in
}
int sizePTE(){
        //Fill in
}
int totalRAMPT(){
        //Fill in
}


//Console Outputs
void inputOutput(int cache, int block, int associativity, char replacementPolicy[],
                         int physicalMem, int percentageMem, int intructionTimeSlice,
                         char traceFile1[], char traceFile2[], char traceFile3[]){
    printf("Cache Simulator - CS 3853 - Group 12\n\n");
    
    printf("Trace File(s):\n"
            "\t\t%s\n"
            "\t\t%s\n"
            "\t\t%s\n", traceFile1, traceFile2, traceFile3);


    printf("***** Cache Input Parameters *****\n\n"
            "Cache Size:                    %d\n"
            "Block Size:                    %d\n"
            "Associativity:                 %d\n"
            "Replacement Policy:            %s\n"
            "Physical Memory:               %d\n"
            "Percent Memory Used by System: %d\n"
            "Instructions / Time Slice:     %d\n"
            ,cache, block, associativity, replacementPolicy, physicalMem, percentageMem, intructionTimeSlice);

}

void calculatedOutput(int cache, int block, int associativity){
    printf("***** Cache Calculated Values *****\n\n"
            "Total # Blocks:                \n"
            "Tag Size:                      \n"
            "Index Size:                    \n"
            "Total # Rows:                  \n"
            "Overhead Size:                 \n"
            "Implementation Memory Size:    \n"
            "Cost:                          \n"
            ,blockReturn(cache, block), tagReturn(block), indexReturn(blockReturn(cache, block), associativity),
                numRows(blockReturn(cache, block), associativity), NULL, NULL, NULL);
}               //Replace NULL with actual values

void pmCalculatedOutput(){
    printf("***** Physical Memory Calculated Values *****\n\n"
            "Number of Physical Pages:      \n"
            "Number of Pages for System:    \n"
            "Size of Page Table Entry:      \n"
            "Total RAM for Page Table(s):   \n"
            , NULL, NULL, NULL, NULL);
            //Replace NULL for actual values
}