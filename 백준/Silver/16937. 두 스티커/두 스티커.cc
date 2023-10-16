#include <iostream>
#include <vector>

using namespace std;

void swap_hw(int& a, int& b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int H, W, N;
    cin >> H >> W >> N;

    vector<pair<int, int>> v;

    for (int i = 0; i < N; i++)
    {
        int R, C;
        cin >> R >> C;

        v.push_back({ R,C });
    }

    //bool i_rotate[4] = { false,false,true,true };
    //bool j_rotate[4] = { false,true,false,true };

    int area = 0;

    for (int i = 0; i < N; i++)
    {
        int i_Height = v[i].first;
        int i_Width = v[i].second;

        for (int j = i + 1; j < N; j++)
        {
            int j_Height = v[j].first;
            int j_Width = v[j].second;

            if ((i_Height + j_Height <= H && max(i_Width, j_Width) <= W) ||
                (i_Height + j_Width <= H && max(i_Width, j_Height) <= W) ||
                (i_Width + j_Height <= H && max(i_Height, j_Width) <= W) ||
                (i_Width + j_Width <= H && max(i_Height, j_Height) <= W))
            {
                area = max(area, i_Height * i_Width + j_Height * j_Width);
            }
            else if ((i_Height + j_Height <= W && max(i_Width, j_Width) <= H) ||
                (i_Height + j_Width <= W && max(i_Width, j_Height) <= H) ||
                (i_Width + j_Height <= W && max(i_Height, j_Width) <= H) ||
                (i_Width + j_Width <= W && max(i_Height, j_Height) <= H))
            {
                area = max(area, i_Height * i_Width + j_Height * j_Width);
            }


            /*for (int k = 0; k < 4; k++)
            {
                if (i_rotate[k])
                {
                    swap_hw(i_Height, i_Width);
                }
                if (j_rotate[k])
                {
                    swap_hw(j_Height, j_Width);
                }

                if (i_Height <= H && j_Height <= H && i_Width <= W && j_Width <= W)
                {
                    if (!(i_Height + j_Height > H && i_Width + j_Width > W))
                    {
                        int tempArea = i_Height * i_Width + j_Height * j_Width;
                        if (tempArea > area)
                            area = tempArea;
                    }
                }

            }*/
        }
    }

    cout << area;

    return 0;
}