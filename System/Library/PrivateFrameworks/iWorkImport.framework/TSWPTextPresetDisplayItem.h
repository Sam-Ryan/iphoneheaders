/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSWPTextStylePreset, NSString;

@interface TSWPTextPresetDisplayItem : NSObject {

	TSWPTextStylePreset* _preset;
	NSString* _displayName;

}

@property (nonatomic,retain) TSWPTextStylePreset * preset;              //@synthesize preset=_preset - In the implementation block
@property (nonatomic,copy) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
-(void)saveToArchive:(TextPresetDisplayItemArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TextPresetDisplayItemArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithPreset:(id)arg1 displayName:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(TSWPTextStylePreset *)preset;
-(void)setPreset:(TSWPTextStylePreset *)arg1 ;
@end

