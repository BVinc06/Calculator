//
//  main.c
//  Addition
//
//  Created by Berthaud Vincent on 27/10/2017.
//  Copyright © 2017 Berthaud Vincent. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int addition (int a, int b)
{
    return a+b;
}

int main()
{
    printf("L’addition de a et de b vaut %d\n", addition(1,4));
    return 0;
}
