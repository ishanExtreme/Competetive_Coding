#include <iostream>

int switch_lights(int a)
{
    if(a==0)
        return 1;
    else
        return 0;

}

int main()
{
    int light_grid[3][3] = {{1,1,1},
                            {1,1,1},
                            {1,1,1}};

    int switches[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)

            std::cin>>switches[i][j];
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            int state = switches[i][j];

            if(state%2 != 0)
            {
                light_grid[i][j] = switch_lights(light_grid[i][j]);

                int slider1 = i;
                int slider2 = j;
                // fixing row moving col left and right
                slider2++;
                if(slider2<3)
                    light_grid[slider1][slider2] = switch_lights(light_grid[slider1][slider2]);
                slider2 = slider2-2;
                if(slider2>0)
                    light_grid[slider1][slider2] = switch_lights(light_grid[slider1][slider2]);
                slider2 = j;
                slider1++;
                if(slider1<3)
                    light_grid[slider1][slider2] = switch_lights(light_grid[slider1][slider2]);
                slider1 = slider1 - 2;
                if(slider1>0)
                    light_grid[slider1][slider2] = switch_lights(light_grid[slider1][slider2]);
                slider1 = i;
                slider2 = j;
                slider1++;
                slider2++;
                if(slider1<3 && slider2<3)
                    light_grid[slider1][slider2] = switch_lights(light_grid[slider1][slider2]);
                slider2 = slider2 - 2;
                if(slider1<3 && slider2>0)
                    light_grid[slider1][slider2] = switch_lights(light_grid[slider1][slider2]);
                slider1 = i;
                slider2 = j;
                slider1--;
                slider2++;
                if(slider1>0 && slider2<3)
                    light_grid[slider1][slider2] = switch_lights(light_grid[slider1][slider2]);
                slider2 = slider2 - 2;
                if(slider1>0 && slider2>0)
                    light_grid[slider1][slider2] = switch_lights(light_grid[slider1][slider2]);
                
            }
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3;j++)
        std::cout<<light_grid[i][j];
        std::cout<<"\n";
    }

    return 0;
}