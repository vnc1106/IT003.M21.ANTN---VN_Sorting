#include"my_lib_sort.h"

string stt(int i) {
    if (i == 0) return "STL_SORT";
    if (i == 1) return "MERGE_SORT";
    if (i == 2) return "HEAP_SORT";
    return "QUICK_SORT";
}
vector<double> RUN_TEST(void (*f_sort)(vector<int> &, int, int), string method) {
    vector<double> result;
    bool accepted = true;
    for(int test=1; test<=10; test++) {
        vector<int> arr(N);
        ifstream f;
        f.open("D:\\GitHub\\Sorting\\Gen_test\\Output_Gen\\in" + to_string(test) + ".txt", ios_base:: in);
        for(int i=0; i<N; i++) f >> arr[i];
        clock_t st, en;  double time;

        st = clock();
        f_sort(arr, 0, N - 1);
        en = clock();
        time = (double)(1000*(en - st))/CLOCKS_PER_SEC;
        result.push_back(time);
        f.close();
        if(!is_sorted(arr.begin(), arr.end())) accepted = false;
    }
    if(accepted) cout << "Thuat toan " + method + " chay thanh cong, day da duoc sap xep!\n";
    else cout << "Thuat toan " + method + " that bai!\n";
    return result;
}

int main() {
    vector< vector<double> > data;
    data.resize(4);
    
    data[0] = RUN_TEST(stl_sort, "STL_SORT");
    data[1] = RUN_TEST(merge_sort, "MERGE_SORT");
    data[2] = RUN_TEST(heap_sort, "HEAP_SORT");
    data[3] = RUN_TEST(quick_sort, "QUICK_SORT");

    cout << "\n===== Bang thong ke thoi gian thuc thi cac thuat toan =====\n";
    cout << setw(12) << "Thuat toan";
    for(int i=1; i<=10; i++) cout << setw(12) << "Test " + to_string(i);
    cout << '\n';
    for(int i=0; i<4; i++) {
        cout << setw(12) << stt(i);
        for(int j=0; j<10; j++) cout << setw(12) << data[i][j];
        cout << '\n';
    }
    system("pause");
}