/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:32:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/MediaStreamPlugins/PhotoStreamsPlugin.mediastream/PhotoStreamsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSDeleterPlugin <MSDeleterDelegate>
@optional
-(void)deleterWillDeassignPluginAsDelegateOfDeleter:(id)arg1;
-(void)deleterWillAssignPluginAsDelegateOfDeleter:(id)arg1;

@required
+(id)deleterPluginForPersonID:(id)arg1;

@end

