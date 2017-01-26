/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTCompetingTeamPlayDetailItem : AceObject <SASTTemplateItem>

@property (assign,nonatomic) BOOL firstEntity; 
@property (nonatomic,retain) SAUIDecoratedText * playDetail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)competingTeamPlayDetailItem;
+(id)competingTeamPlayDetailItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)firstEntity;
-(void)setFirstEntity:(BOOL)arg1 ;
-(SAUIDecoratedText *)playDetail;
-(void)setPlayDetail:(SAUIDecoratedText *)arg1 ;
-(id)encodedClassName;
@end

