//
//  GraphQLResultNormalizer.h
//  Apollo_OC
//
//  Created by Travel Chu on 4/13/17.
//  Copyright © 2017 Midtown Doornail. All rights reserved.
//

#import "RecordSet.h"
#import "CacheKeyForObject.h"
#import "GraphQLResultReader.h"

@class Field;
@class GraphQLResolveInfo;
@interface GraphQLResultNormalizer : NSObject <GraphQLResultReaderDelegate>
@property (nonatomic, strong) RecordSet *records;
@property (nonatomic, strong) NSMutableSet <CacheKey *> *dependentKeys;
@property (nonatomic, strong) CacheKeyForObject cacheKeyForObject;

- (instancetype)initWithRootKey:(CacheKey *)rootKey;

//- (void)willResolve:(Field *)field info:(GraphQLResolveInfo *)info;
//- (void)didResolve:(Field *)field info:(GraphQLResolveInfo *)info;
//- (void)didParse:(JSONValue)value;
//- (void)didParseNull;
//- (void)willParse:(NSDictionary <JSONObject> *)object;
//- (void)didParseJSONObject:(NSDictionary <JSONObject> *)object;
//- (void)willParseElements:(NSArray *)array;
//- (void)willParseElementAtIndex:(NSInteger)index;
//- (void)didParseElementAtIndex:(NSInteger)index;
//- (void)didParseElements:(NSArray *)array;

@end
