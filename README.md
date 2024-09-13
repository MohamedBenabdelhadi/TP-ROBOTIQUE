# TP-ROBOTIQUE
Tp Robotique avec Nouhaila Faris





 void TIM2_IRQHandler(void) {
    // Vérification du flag d'interruption du timer
    if (__HAL_TIM_GET_FLAG(&htim2, TIM_FLAG_UPDATE) != RESET) {
        if (__HAL_TIM_GET_IT_SOURCE(&htim2, TIM_IT_UPDATE) != RESET) {
            __HAL_TIM_CLEAR_IT(&htim2, TIM_IT_UPDATE);
            // Changer l'état de la LED
            HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5); // Par exemple pour la LED sur PA5
        }
    }
}


GPIO_InitTypeDef GPIO_InitStruct = {0};
GPIO_InitStruct.Pin = GPIO_PIN_13;  // Par exemple, si le bouton est sur PA13
GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;  // Interruption sur front descendant
GPIO_InitStruct.Pull = GPIO_NOPULL;
HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

HAL_UART_Receive(&huart2, (uint8_t *)&received_char, 1, HAL_MAX_DELAY);
        HAL_UART_Transmit(&huart2, (uint8_t *)&received_char, 1, HAL_MAX_DELAY);

