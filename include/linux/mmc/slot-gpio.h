/*
 * Generic GPIO card-detect helper header
 *
 * Copyright (C) 2011, Guennadi Liakhovetski <g.liakhovetski@gmx.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
<<<<<<< HEAD
/*
 * NOTE: This file has been modified by Sony Mobile Communications Inc.
 * Modifications are Copyright (c) 2015 Sony Mobile Communications Inc,
 * and licensed under the license of the file.
 */
=======
>>>>>>> 132f55c417fd9d9f65c56927b69313b211be9353

#ifndef MMC_SLOT_GPIO_H
#define MMC_SLOT_GPIO_H

struct mmc_host;

int mmc_gpio_get_ro(struct mmc_host *host);
int mmc_gpio_request_ro(struct mmc_host *host, unsigned int gpio);
void mmc_gpio_free_ro(struct mmc_host *host);

int mmc_gpio_get_cd(struct mmc_host *host);
int mmc_gpio_request_cd(struct mmc_host *host, unsigned int gpio,
			unsigned int debounce);
void mmc_gpio_free_cd(struct mmc_host *host);
<<<<<<< HEAD
void mmc_gpio_init_uim2(struct mmc_host *host, unsigned int gpio);
void mmc_gpio_set_uim2_en(struct mmc_host *host, int value);
void mmc_gpio_tray_close_set_uim2(struct mmc_host *host, int value);
=======
>>>>>>> 132f55c417fd9d9f65c56927b69313b211be9353

int mmc_gpiod_request_cd(struct mmc_host *host, const char *con_id,
			 unsigned int idx, bool override_active_level,
			 unsigned int debounce, bool *gpio_invert);
int mmc_gpiod_request_ro(struct mmc_host *host, const char *con_id,
			 unsigned int idx, bool override_active_level,
			 unsigned int debounce, bool *gpio_invert);
void mmc_gpiod_free_cd(struct mmc_host *host);
void mmc_gpiod_request_cd_irq(struct mmc_host *host);

<<<<<<< HEAD
#ifdef CONFIG_MMC_SD_DEFERRED_RESUME
void mmc_cd_prepare_suspend(struct mmc_host *host, bool pending_detect);
bool mmc_cd_is_pending_detect(struct mmc_host *host);
#endif
=======
>>>>>>> 132f55c417fd9d9f65c56927b69313b211be9353
#endif
