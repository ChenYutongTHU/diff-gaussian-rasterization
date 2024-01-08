/*
 * Copyright (C) 2023, Inria
 * GRAPHDECO research group, https://team.inria.fr/graphdeco
 * All rights reserved.
 *
 * This software is free for non-commercial, research and evaluation use 
 * under the terms of the LICENSE.md file.
 *
 * For inquiries contact  george.drettakis@inria.fr
 */

#ifndef CUDA_RASTERIZER_CONFIG_H_INCLUDED
#define CUDA_RASTERIZER_CONFIG_H_INCLUDED

#define NUM_CHANNELS 3 // Default 3, RGB
#define BLOCK_X 16
#define BLOCK_Y 16
#define NGS_PER_RAY 50
#define NFEATURE_PER_GS 15 //15
#endif
// opacity, exp(power), ids, 
// r, g, b, 
// mean-x, mean-y, depth-z, 
// cov-00, cov-01, cov-11, 
// raw-cov-00, raw-cov-01, raw-cov-11th-z
