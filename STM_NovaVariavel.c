/*
Declaração dos LEDs e botões no STM
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
    int valor_jogador1 = 0 ; // valor da variável para verificação de acender ou não os LEDs
    int valor_jogador2 = 0 ; // valor da variável para verificação de acender ou não os LEDs
    int numero_sorteado = random (0,1); //sorteador de um numero qualquer 
	numero_sorteado = numero_sorteado%2; // resto da divisão 

    //Verificação dos numeros sorteados
    for (numero_sorteado = 0){
    HAL_GPIO_WritePin(GPIOA, 2, 1);
    }
    for (numero_sorteado = 1){
    HAL_GPIO_WritePin(GPIOA, 1, 1);
    }

    //Logica: se o LED1 == 1 && o botao1 do jogador 1 for pressionado, ponto para o jogador 1

        if ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0) == 1)){
            valor_jogador1++;
        }

    //Logica: se o LED2 == 1 && o botao2 do jogador 1 for pressionado, ponto para o jogador 1  

        else if  ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1) == 1)){
            valor_jogador1++;
        }

    //Logica: se o LED1 == 1 && o botao1 do jogador 1 for pressionado errado , ponto para o jogador 2

        else if ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0) == 0)){
            valor_jogador2++;
        }

    //Logica: se o LED2 == 1 && o botao2 do jogador 1 for pressionado errado , ponto para o jogador 2

        else if  ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1) == 0)){
            valor_jogador2++;
        }

/******************************************************************************************************************/

    //Logica: se o LED1 == 1 && o botao1 do jogador 2 for pressionado, ponto para o jogador 2     
        
        else if ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_10) == 1)){
            valor_jogador2++;
        }

    //Logica: se o LED2 == 1 && o botao2 do jogador 2 for pressionado, ponto para o jogador 2         
    
        else if  ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_11) == 1)){
            valor_jogador2++;
        }

    //Logica: se o LED1 == 1 && o botao1 do jogador 2 for pressionado errado , ponto para o jogador 1
  
        else if ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_2) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_10) == 0)){
            valor_jogador1++;
        }

    //Logica: se o LED2 == 1 && o botao2 do jogador 2 for pressionado errado , ponto para o jogador 1

        else if  ((HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_1) == 1) && (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_11) == 1)){
            valor_jogador1++;
        }

/******************************************************************************************************************/

    if (valor_jogador1 == 1){
    HAL_GPIO_WritePin(GPIOA, 5, 1);    
    }

    else if (valor_jogador1 == 2){
    HAL_GPIO_WritePin(GPIOA, 4, 1);    
    }

    else if (valor_jogador1 == 3){
    HAL_GPIO_WritePin(GPIOA, 3, 1); 
    HAL_DELAY(1500);
    HAL_GPIO_WritePin(GPIOA, 3, 1); 
    HAL_GPIO_WritePin(GPIOA, 4, 1); 
    HAL_GPIO_WritePin(GPIOA, 5, 1);
    HAL_DELAY(1000);
    HAL_GPIO_WritePin(GPIOA, 3, 0); 
    HAL_GPIO_WritePin(GPIOA, 4, 0); 
    HAL_GPIO_WritePin(GPIOA, 5, 0); 
    valor_jogador1 = 0;   
    }

    else if (valor_jogador2 == 1){
    HAL_GPIO_WritePin(GPIOA, 0, 1);    
    }

    else if (valor_jogador2 == 2){
    HAL_GPIO_WritePin(GPIOB, 12, 1);    
    }

    else if (valor_jogador2 == 3){
    HAL_GPIO_WritePin(GPIOB, 13, 1); 
    HAL_DELAY(1500);
    HAL_GPIO_WritePin(GPIOB, 13, 1); 
    HAL_GPIO_WritePin(GPIOB, 12, 1); 
    HAL_GPIO_WritePin(GPIOA, 0, 1);
    HAL_DELAY(1000);
    HAL_GPIO_WritePin(GPIOB, 13, 0); 
    HAL_GPIO_WritePin(GPIOB, 12, 0); 
    HAL_GPIO_WritePin(GPIOA, 0, 0); 
    valor_jogador2 = 0;   
    }

}