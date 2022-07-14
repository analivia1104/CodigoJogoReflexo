while (1)
  {
	  int valor_jogador1 = 0 ; // valor da variável para verificação de acender ou não os LEDs
	  int valor_jogador2 = 0 ; // valor da variável para verificação de acender ou não os LEDs
	  int numero_sorteado = random(0, 1);
	 	  numero_sorteado=numero_sorteado%2;

	 	 //Verificação dos numeros sorteados
	 	 if (numero_sorteado == 0){
	 	 	 HAL_GPIO_WritePin(GPIOA, 2, 1);
	 	 	 	    }
	      else if (numero_sorteado == 1){
	 	 	  HAL_GPIO_WritePin(GPIOA, 1, 1);
	 	 	 	    }


	 	 while ((HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0) == 1) || (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1) == 1) ||
	 	  (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_10) == 1) || (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_0) == 11))
	 	 {
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
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
	 	    }

	 	    else if (valor_jogador1 == 2){
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	 	    }

	 	    else if (valor_jogador1 == 3){
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	 	    HAL_Delay(1500);
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);
	 	    HAL_Delay(1000);
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 0);
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 0);
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 0);
	 	    valor_jogador1 = 0;
	 	    }

	 	    else if (valor_jogador2 == 1){
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
	 	    }

	 	    else if (valor_jogador2 == 2){
	 	    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
	 	    }

	 	    else if (valor_jogador2 == 3){
	 	    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
	 	    HAL_Delay(1500);
	 	    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
	 	    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
	 	    HAL_Delay(1000);
	 	    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
	 	    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
	 	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 0);
	 	    valor_jogador2 = 0;
	 	    }

	 	}

}