#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, Q;
    cin >> N >> M >> Q;

    // pos[i] = en qué posición termina el vaso que empezó en i
    vector<int> pos(N + 1);
    for (int i = 1; i <= N; ++i)
        pos[i] = i;

    // Procesar los M movimientos
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        swap(pos[a], pos[b]);
    }

    // res[i] = para cada posición final, quién estaba originalmente ahí
    vector<int> res(N + 1);
    for (int i = 1; i <= N; ++i)
        res[pos[i]] = i;

    // Responder las Q consultas
    for (int i = 0; i < Q; ++i) {
        int p;
        cin >> p;
        cout << res[p] << " ";
    }

    cout << '\n';
    return 0;
}
