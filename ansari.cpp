#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mk make_pair

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        ll x, y;
        cin >> x >> y;
        ll N, M, K;
        cin >> N >> M >> K;
        vector<pair<double, pair<ll, ll>>> n;
        vector<pair<ll, ll>> n_co;
        ll x_temp, y_temp;
        for (ll i = 0; i < N; i++)
        {
            cin >> x_temp >> y_temp;
            double dis = sqrt(pow(x_temp - x, 2) + pow(y_temp - y, 2) * 1.0);
            n.pb(mk(dis, mk(x_temp, y_temp)));
            n_co.pb(mk(x_temp, y_temp));
        }

        vector<pair<double, pair<ll, ll>>> m;
        vector<pair<ll, ll>> m_co;
        for (ll i = 0; i < M; i++)
        {
            cin >> x_temp >> y_temp;
            double dis = sqrt(pow(x_temp - x, 2) + pow(y_temp - y, 2) * 1.0);
            m.pb(mk(dis, mk(x_temp, y_temp)));
            m_co.pb(mk(x_temp, y_temp));
        }

        ll x_local, y_local, x2_temp, y2_temp;
        vector<double> n_final, m_final;
        for (auto i = n.begin(); i != n.end(); i++)
        {
            pair<ll, ll> p = i->second;
            x_temp = p.first;
            y_temp = p.second;
            double local_dis = INT64_MAX;
            for (auto j = m.begin(); j != m.end(); j++)
            {
                pair<ll, ll> q = j->second;
                x2_temp = q.first;
                y2_temp = q.second;
                double dis = sqrt(pow(x_temp - x2_temp, 2) + pow(y_temp - y2_temp, 2) * 1.0);
                if (dis < local_dis)
                {
                    local_dis = dis;
                    x_local = x2_temp;
                    y_local = y2_temp;
                }
            }
            i->first = i->first + local_dis;
            n_final.pb(i->first);
            pair<ll, ll> t(x_local, y_local);
            i->second = t;
        }

        for (auto i = m.begin(); i != m.end(); i++)
        {
            pair<ll, ll> p = i->second;
            x_temp = p.first;
            y_temp = p.second;
            double local_dis = INT64_MAX;
            for (auto j = n_co.begin(); j != n_co.end(); j++)
            {
                //pair<ll,ll>q=j->second;
                x2_temp = j->first;
                y2_temp = j->second;
                double dis = sqrt(pow(x_temp - x2_temp, 2) + pow(y_temp - y2_temp, 2) * 1.0);
                if (dis < local_dis)
                {
                    local_dis = dis;
                    x_local = x2_temp;
                    y_local = y2_temp;
                }
            }
            i->first = i->first + local_dis;
            m_final.pb(i->first);
            pair<ll, ll> t(x_local, y_local);
            i->second = t;
        }

        cin >> x_temp >> y_temp;
        for (auto i = n.begin(); i != n.end(); i++)
        {
            pair<ll, ll> p = i->second;
            x2_temp = p.first;
            y2_temp = p.second;
            double dis = sqrt(pow(x_temp - x2_temp, 2) + pow(y_temp - y2_temp, 2) * 1.0);
            i->first = i->first + dis;
        }

        for (auto i = m.begin(); i != m.end(); i++)
        {
            pair<ll, ll> p = i->second;
            x2_temp = p.first;
            y2_temp = p.second;
            double dis = sqrt(pow(x_temp - x2_temp, 2) + pow(y_temp - y2_temp, 2) * 1.0);
            i->first = i->first + dis;
        }

        for (int i = 1; i < K; i++)
        {
            cin >> x_temp >> y_temp;
            int c = 1;
            for (auto j = n.begin(); j != n.end(); j++)
            {
                pair<ll, ll> p = j->second;
                x2_temp = p.first;
                y2_temp = p.second;
                double dis = sqrt(pow(x_temp - x2_temp, 2) + pow(y_temp - y2_temp, 2) * 1.0);
                if ((dis + n_final[c]) < j->first)
                    j->first = dis + n_final[c];
                c++;
            }

            c = 1;
            for (auto j = m.begin(); j != m.end(); j++)
            {
                pair<ll, ll> p = j->second;
                x2_temp = p.first;
                y2_temp = p.second;
                double dis = sqrt(pow(x_temp - x2_temp, 2) + pow(y_temp - y2_temp, 2) * 1.0);
                if ((dis + m_final[c]) < j->first)
                    j->first = dis + m_final[c];
                c++;
            }
        }
        double final_dis = INT64_MAX;
        for (auto i = n.begin(); i != n.end(); i++)
        {
            if (i->first < final_dis)
            {
                final_dis = i->first;
            }
        }
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->first < final_dis)
            {
                final_dis = i->first;
            }
        }
        cout << fixed << setprecision(10) << final_dis << endl;
    }
}