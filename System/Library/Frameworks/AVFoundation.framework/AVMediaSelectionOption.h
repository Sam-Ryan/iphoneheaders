/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionOptionInternal, NSString, NSArray, NSLocale, AVAssetTrack;

@interface AVMediaSelectionOption : NSObject <NSCopying> {

	AVMediaSelectionOptionInternal* _mediaSelectionOption;

}

@property (nonatomic,readonly) NSString * localizedDisplayName; 
@property (nonatomic,readonly) BOOL mpIsOnlyAC3; 
@property (nonatomic,readonly) BOOL mpIsSDH; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * mediaSubTypes; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) int trackID; 
@property (nonatomic,readonly) NSString * unicodeLanguageIdentifier; 
@property (nonatomic,readonly) NSString * unicodeLanguageCode; 
+(id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4 ;
-(NSString *)localizedDisplayName;
-(long long)_caseInsensitiveCompare:(id)arg1 ;
-(BOOL)_containsOnlyAC3;
-(BOOL)_containsAC3;
-(id)_extendedLanguageTagOrUndetermined;
-(BOOL)mpIsSDH;
-(BOOL)mpIsOnlyAC3;
-(id)makeNowPlayingInfoLanguageOption;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)dictionary;
-(id)_title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSLocale *)locale;
-(id)group;
-(NSString *)displayName;
-(id)languageCode;
-(NSString *)unicodeLanguageIdentifier;
-(NSString *)unicodeLanguageCode;
-(NSArray *)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)_track;
-(id)_groupMediaType;
-(AVAssetTrack *)track;
-(id)_ancillaryDescription;
-(BOOL)_isAuxiliaryContent;
-(BOOL)_isDesignatedDefault;
-(BOOL)displaysNonForcedSubtitles;
-(id)_groupMediaCharacteristics;
-(id)optionID;
-(id)outOfBandIdentifier;
-(id)outOfBandSource;
-(id)initWithGroup:(id)arg1 ;
-(id)_taggedMediaCharacteristics;
-(id)associatedExtendedLanguageTag;
-(id)fallbackIDs;
-(id)associatedPersistentIDs;
-(id)_preferredMetadataTitleAccordingToPreferredLanguages:(id)arg1 fallingBackToMatchingEmptyLocale:(BOOL)arg2 ;
-(id)displayNameWithLocale:(id)arg1 fallingBackToMatchingUndeterminedAndMultilingual:(BOOL)arg2 ;
-(BOOL)_isMainProgramContent;
-(id)associatedUnicodeLanguageIdentifier;
-(id)displayNameWithLocale:(id)arg1 ;
-(BOOL)hasMediaCharacteristic:(id)arg1 ;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)mediaCharacteristics;
-(NSString *)extendedLanguageTag;
-(id)propertyList;
-(NSArray *)mediaSubTypes;
-(NSArray *)commonMetadata;
-(NSString *)mediaType;
-(BOOL)isPlayable;
-(id)_groupID;
-(int)trackID;
@end

