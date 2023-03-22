/*
 * Copyright 2023 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "FIRAggregateField.h"
#import "FIRFieldPath.h"

NS_ASSUME_NONNULL_BEGIN

@interface FIRAggregateField (Internal)
/**
 * Specifies the field that is aggregated.
 */
@property(nonatomic, strong, readonly) FIRFieldPath *fieldPath;

@end

/**
 * FIRAggregateField class for sum aggregations. Exposed internally so code can do isKindOfClass
 * checks on it.
 */
@interface FSTSumAggregateField : FIRAggregateField
- (instancetype)init NS_UNAVAILABLE;
@end

/**
 * FIRAggregateField class for average aggregations. Exposed internally so code can do isKindOfClass
 * checks on it.
 */
@interface FSTAverageAggregateField : FIRAggregateField
- (instancetype)init NS_UNAVAILABLE;
@end

/** FIRAggregateField class for count aggregations. Exposed internally so code can do isKindOfClass
 * checks on it.
 */
@interface FSTCountAggregateField : FIRAggregateField
- (instancetype)init NS_UNAVAILABLE;
@end

NS_ASSUME_NONNULL_END