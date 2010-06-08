/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Entity.h"

@class NSArray, ML3Predicate, NSString;

@interface ML3Container : ML3Entity {
}
@property(readonly, assign) long long limitValue;
@property(readonly, assign) NSArray* limitOrderingProperties;
@property(readonly, assign) NSArray* limitOrderingDirectionality;
@property(readonly, assign) NSString* limitingProperty;
@property(readonly, assign, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;
@property(readonly, assign, getter=isLimitedByCount) BOOL limitedByCount;
@property(readonly, assign) ML3Predicate* dynamicPredicate;
@property(readonly, assign) ML3Predicate* staticPredicate;
+(void)initialize;
+(id)databaseTable;
+(id)defaultOrderingProperties;
+(id)joinClauseForProperty:(id)property;
+(id)orderingCollationForProperty:(id)property;
+(id)sectionPropertyForProperty:(id)property;
+(BOOL)hasCriterionInCriteriaList:(OpaqueSearchCriteriaList*)criteriaList forITDBTrackField:(int)itdbtrackField;
+(id)predicateForCriteriaList:(OpaqueSearchCriteriaList*)criteriaList dynamicCriteria:(BOOL)criteria;
+(void)populateStaticItemsOfDynamicContainersOnHandle:(sqlite3*)dynamicContainersOnHandle;
-(OpaqueSearchCriteriaList*)importedCriteriaList;
-(BOOL)_isDescendingForTrackOrderProperty:(id)trackOrderProperty reverseOrderProperty:(id)property;
-(BOOL)isCustomContainerOrderingDescending;
-(void)getDisplayOrderingProperties:(id*)properties isDescending:(BOOL*)descending;
-(id)populateSQLWithStaticTrackPersistentID:(id)staticTrackPersistentID;
-(void)bindPopulateStatement:(sqlite3_stmt*)statement withStaticTrackPersistentID:(id)staticTrackPersistentID;
@end

