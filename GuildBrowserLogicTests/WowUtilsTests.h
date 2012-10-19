//
//  WowUtilsTests.h
//  GuildBrowser
//
//  Created by Audrey on 19/10/12.
//  Copyright (c) 2012 Charlie Fulton. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>
#import "Character.h"
#import "Guild.h"
#import "Item.h"

@interface WowUtilsTests : SenTestCase
+(NSString *)classFromCharacterType:(CharacterClassType)type;
+(NSString *)raceFromRaceType:(CharacterRaceType)type;
+(NSString *)qualityFromQualityType:(ItemQuality)quality;
@end
