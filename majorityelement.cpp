/*******************************************************************/
/*                                                                 */
/*  A1 Part 3: Majority Element starter file                       */
/*                                                                 */
/*  Author1 Name: Jacky Dai                                        */
/*      - findCandidate()                                          */
/*      - majorityElement()                                        */
/*  Author1 Name: Armen Merzaian                                   */
/*      - findCandidate()                                          */
/*      - majorityElement()                                        */
/*******************************************************************/
bool findCandidate(int array[],int& candidate, int sz);
bool majorityElement(const int arr[], int& majority, int sz);


/*
    This function takes an array of integers and searches through it to
    find the most common element (majority)  of that array.
    This function returns true if a majority is found with confidence, false otherwise. 
    The function will also pass back the majority if it is found.
    
*/
bool majorityElement(const int arr[], int& majority, int sz){
    int count = 0;
    int newArr[sz];
    for (int i = 0; i < sz; i++) {
        newArr[i] = arr[i];
    }
    bool next = findCandidate(newArr, majority, sz);
    for (int i = 0; i < sz && next == true; i++) {
        if (arr[i] == majority) {
            count++;
        }
    }
 
 
    if (count > sz / 2) {
        return true;
    }
 
    else {
        return false;
    }
        
}


/*
    This function takes an array of integers and searches through it to
    find the most likely candidate for the majority element of that array.
    This function returns true if a candidate is found, false otherwise. 
    The function will also pass back the candidate if it is found.
*/
bool findCandidate(int array[],int& candidate, int sz){
    
    if (sz == 0) {
        if (candidate < 0 || candidate > 1000000) { //checks to see if candidate is extremely high or low which means it hasn't been updated since running the recursion
            return false;
        }
        return true;
    }
    else if (sz == 1) {
        candidate = array[0];
        return true;
    }
    int size = 0;
    if (sz % 2 == 0) {
        for (int i = 0; i < sz; i+=2) {
            if (array[i] == array[i + 1]) {
                array[size] = array[i];
                size++;
            }
         }
    }
    else {
        for (int i = 0; i < sz - 1; i+=2) {
            if (array[i] == array[i + 1]) {
                array[size] = array[i];
                size++;
            }
        }
        candidate = array[sz - 1];
    }
    return findCandidate(array, candidate, size);
}
