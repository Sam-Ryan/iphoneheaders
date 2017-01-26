/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:27 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSEntityValueProvider.h>

@protocol IKJSEntityValueProvider <JSExport>
@required
-(id)valueForEntityProperty:(id)arg1;
-(id)valuesForEntityProperties:(id)arg1;

@end


@protocol IKEntityValueProviding;
@interface IKJSEntityValueProvider : IKJSObject <IKJSEntityValueProvider> {

	id<IKEntityValueProviding> _entityValueProvider;

}

@property (nonatomic,retain) id<IKEntityValueProviding> entityValueProvider;              //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
-(id)_valueForEntityProperty:(id)arg1 ;
-(void)setEntityValueProvider:(id<IKEntityValueProviding>)arg1 ;
-(id<IKEntityValueProviding>)entityValueProvider;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
@end

