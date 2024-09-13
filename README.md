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


