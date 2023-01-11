#include<bits/stdc++.h>
using namespace std;
int x,y,z,t,n,m;
int a[2005][2005];
struct data{
	int x,y,k;
};

data push_data(int x, int y, int k){
    data temp;
    temp.x = x;
    temp.y = y;
    temp.k = k;
    return temp;
}

void BFS(){
    queue<data> q;
    q.push(push_data(x, y, 0));
	a[x][y] = 0;
    while(q.size() != 0){
        int x0 = q.front().x;
        int y0 = q.front().y;
        int k0 = q.front().k;
        q.pop();
        if(x0 == z && y0 == t){
            cout << k0 << "\n";
            return;
        }
        if(a[x0 + 1][y0] == 1){
        	a[x0 + 1][y0] = 0;
            q.push(push_data(x0 + 1, y0, k0 + 1));
        }
        if(a[x0 - 1][y0] == 1){
        	a[x0 - 1][y0] = 0;
            q.push(push_data(x0 - 1, y0, k0 + 1));
        }
        if(a[x0][y0 + 1] == 1){
        	a[x0][y0 + 1] = 0;
            q.push(push_data(x0, y0 + 1, k0 + 1));
        }
        if(a[x0][y0 - 1] == 1){
        	a[x0][y0 - 1] = 0;
            q.push(push_data(x0, y0 - 1, k0 + 1));
        }
    }

    cout << "-1\n";
}


int main() {
	int c;
	cin >> c;
	while(c--){
		cin >> n >> m >> x >> y >> z >> t;
		x++;
		y++;
		z++;
		t++;

		for(int i = 0; i <= n + 1; i++){
			for(int j = 0; j <= m + 1; j++){
				a[i][j] = 0;
			}
		}
		
		for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
		}

		if(a[x][y] == 0){
            cout << "-1\n";
		}
		else{
            BFS();
		}

	}
}
