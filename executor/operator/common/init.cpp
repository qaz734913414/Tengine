/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * License); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * AS IS BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/*
 * Copyright (c) 2018, Open AI Lab
 * Author: haitao@openailab.com
 */
#include <iostream>
#include <functional>

namespace TEngine {

extern void RegisterConcatNodeExec(void);
extern void RegisterDropoutNodeExec(void);
extern void RegisterSoftmaxNodeExec(void);
extern void RegisterEltwiseNodeExec(void);
extern void RegisterLRN_NodeExec(void);
extern void RegisterSliceNodeExec(void);
extern void RegisterPReLUNodeExec(void);
extern void RegisterNormalizeNodeExec(void);
extern void RegisterPermuteNodeExec(void);
extern void RegisterFlattenNodeExec(void);
extern void RegisterPriorBoxNodeExec(void);
extern void RegisterDetectionOutputNodeExec(void);
extern void RegisterRegionNodeExec(void);
extern void RegisterReorgNodeExec(void);
extern void RegisterRPNNodeExec(void);
extern void RegisterROIPoolingNodeExec(void);
extern void RegisterReLu6NodeExec(void);
extern void RegisterReLuNodeExec(void);
extern void RegisterResizeNodeExec(void);
extern void RegisterLogisticNodeExec(void);
extern void RegisterDetectionPostProcessNodeExec(void);
extern void RegisterStridedSliceNodeExec(void);
extern void RegisterPadNodeExec(void);
extern void RegisterUpsampleNodeExec(void);
extern void RegisterFMCommonNodeExec(void);
extern void RegisterL2NormalizationNodeExec(void);
extern void RegisterL2Pool_NodeExec(void);
extern void RegisterEluNodeExec(void);
extern void RegisterLayerNormLSTMNodeExec(void);
extern void RegisterReLU1NodeExec(void);
#ifdef CONFIG_ARCH_BLAS
extern void RegisterConvBlasNodeExec(void);
extern void RegisterDeconvBlasNodeExec(void);
extern void RegisterFcBlasNodeExec(void);
extern void RegisterLSTMNodeExec(void);
extern void RegisterRNNNodeExec(void);
extern void RegisterGRUNodeExec(void);
#endif
extern void RegisterPooling_NodeExec(void);
extern void RegisterBatchNorm_NodeExec(void);
extern void RegisterScale_NodeExec(void);
extern void RegisterCrop_NodeExec(void);
extern void RegisterCopy_NodeExec(void);
extern void RegisterPower_NodeExec(void);

extern void RegisterCommonFusedBNScaleReluNodeExec(void);

void RegisterCommonOps(void)
{
    RegisterConcatNodeExec();
    RegisterDropoutNodeExec();
    RegisterSoftmaxNodeExec();
    RegisterLRN_NodeExec();
    RegisterPReLUNodeExec();
    RegisterSliceNodeExec();
    RegisterNormalizeNodeExec();
    RegisterPermuteNodeExec();
    RegisterFlattenNodeExec();
    RegisterPriorBoxNodeExec();
    RegisterDetectionOutputNodeExec();
    RegisterRegionNodeExec();
    RegisterReorgNodeExec();
    RegisterRPNNodeExec();
    RegisterROIPoolingNodeExec();
    RegisterReLu6NodeExec();
    RegisterReLuNodeExec();
    RegisterResizeNodeExec();
    RegisterLogisticNodeExec();
    RegisterDetectionPostProcessNodeExec();
    RegisterStridedSliceNodeExec();
    RegisterPadNodeExec();
    RegisterUpsampleNodeExec();
    RegisterFMCommonNodeExec();
    RegisterL2NormalizationNodeExec();
    RegisterL2Pool_NodeExec();
    RegisterEluNodeExec();
    RegisterLayerNormLSTMNodeExec();
    RegisterReLU1NodeExec();
#ifdef CONFIG_ARCH_BLAS
    RegisterConvBlasNodeExec();
    RegisterDeconvBlasNodeExec();
    RegisterFcBlasNodeExec();
    RegisterLSTMNodeExec();
    RegisterRNNNodeExec();
    RegisterGRUNodeExec();
#endif
    RegisterPooling_NodeExec();
    RegisterBatchNorm_NodeExec();
    RegisterCrop_NodeExec();
    RegisterScale_NodeExec();
    RegisterCrop_NodeExec();
    RegisterCopy_NodeExec();
    RegisterPower_NodeExec();
    RegisterEltwiseNodeExec();
    RegisterCommonFusedBNScaleReluNodeExec();
}

}    // namespace TEngine
