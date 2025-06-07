#include <iostream> // これはOK
#include <string> 
#include <vector>    // 動的配列 (vector)

using namespace std; // これもOK。std::を省略できる

int main() {
    ios::sync_with_stdio(false); // using namespace std; があるので std:: は不要
    cin.tie(nullptr);            // using namespace std; があるので std:: は不要
        
    int N;
    vector<string> lines(2); 
    cin >> N; // using namespace std; があるので std:: は不要
    for (int i = 0; i < 2; ++i) {
        cin >> lines[i]; // 各行の文字列を lines[i] に格納
    }

    for (int j = 0; j < N; ++j) {
        if(lines[0][j] == 'o' && lines[1][j] == 'o') {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}