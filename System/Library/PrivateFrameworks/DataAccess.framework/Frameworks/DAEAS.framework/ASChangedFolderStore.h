/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString, NSArray;

@interface ASChangedFolderStore : ASItem {

	NSNumber* _status;
	NSString* _syncKey;
	NSArray* _updatedFolders;

}

@property (nonatomic,retain) NSNumber * status;                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * syncKey;                    //@synthesize syncKey=_syncKey - In the implementation block
@property (nonatomic,retain) NSArray * updatedFolders;              //@synthesize updatedFolders=_updatedFolders - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSString *)syncKey;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(NSArray *)updatedFolders;
-(void)setUpdatedFolders:(NSArray *)arg1 ;
-(void)setSyncKey:(NSString *)arg1 ;
@end

