
class SelectionSortMieju {

    public int[] sort(int[] unsortedArray,int beginIndex){
        int highestIndex = unsortedArray.length-1;
        int currentIndex = beginIndex;
        for (int i=beginIndex; i<=highestIndex; i++){
            if(unsortedArray[currentIndex]>unsortedArray[i]){
                currentIndex = i;
            }
        }
        if(beginIndex<highestIndex){
            int helpVariable = unsortedArray[beginIndex];
            unsortedArray[beginIndex] = unsortedArray[currentIndex];
            unsortedArray[currentIndex] = helpVariable;
            beginIndex += 1;
            sort(unsortedArray,beginIndex);
        }
        return unsortedArray;
    }


    public static void main(String args[]){
        SelectionSortMieju alpha = new SelectionSortMieju();
        int[] array = { 1,5,7,3,8,10,2,4,6,9 };
        array = alpha.sort(array,0);
    }
}