#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
int arr[8];
bool visited[8];

void func(int cnt)
{
    if(cnt == M)
    {
        for(int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
        cout << endl;
        return;
    }

    for(int i = 0; i < N; i++)
    {
        if(visited[i])  continue;

        visited[i] = true;
        vec.push_back(arr[i]);
        func(cnt + 1);
        vec.pop_back();
        visited[i] = false;
    }
}

int main()
{
    cin >> N >> M;
    for(int i = 0; i < N; i++)
    {
        arr[i] = i + 1;
        visited[i] = false;
    }

    func(0);
}
