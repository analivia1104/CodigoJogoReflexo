/*
led1 - A5 / JOG1
led2 - A4 / JOG1
led3 - A3 / JOG1
led4 - A2 /JOGO
led5 - A1 /JOGO
led6 - A0 / JOG2
led7 - B12 / JOG2
led8 - B13 / JOG2

botao1 - B0  / JOG1
botao2 - B1  / JOG1
botao3 - B10 / JOG2
botao4 - B11 / JOG2
*/
while (1)
{
    int numero_sorteado = random (0,1);
	numero_sorteado = numero_sorteado%2;

    //Logica: se o LED 1 && o botao1 do jogador 1 for pressionado, ponto para o jogador 1
        if ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0))){
            HAL_GPIO_WritePin(GPIOA, 5, 1); // portal, numero, estado logico

    //Logica: se o LED 1 && o botao1 do jogador 2 for pressionado, ponto para o jogador 2     
        else if ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_10))){
            HAL_GPIO_WritePin(GPIOA, 0, 1); // portal, numero, estado logico

        }
    //Logica: se o LED 2 && o botao2 do jogador 1 for pressionado, ponto para o jogador 1         
        else if  ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1))){
            HAL_GPIO_WritePin(GPIOA, 4, 1); // portal, numero, estado logico

    //Logica: se o LED 2 && o botao2 do jogador 2 for pressionado, ponto para o jogador 2         
        else if  ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_11))){
            HAL_GPIO_WritePin(GPIOB, 12, 1); // portal, numero, estado logico









}
}
}