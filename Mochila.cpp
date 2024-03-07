using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    int N;
    int C;
    cin >> N;
    cin >> C;

    vector<int> ca(N + 1), val(N + 1);

   if(N==0 || C==0){

   }else{
        for (int i = 1; i <= N; i++){
        int p, v;
        cin >> p >> v;

        ca[i] = p;
        val[i] = v;

    }
    vector<vector<int>> A(N + 1, vector<int>(C + 1,0));
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= C; j++){
            if (ca[i] <= j){
                A[i][j] = max(A[i - 1][j], val[i] + A[i - 1][j - ca[i]]);
            }
            else{
                A[i][j] = A[i - 1][j];
    }
    }
    }

    cout << A[N][C] << "\n";
   }
    return 0;
}
