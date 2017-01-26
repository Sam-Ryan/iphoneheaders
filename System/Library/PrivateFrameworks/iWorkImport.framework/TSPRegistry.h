/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:36 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSPRegistry : NSObject {

	hash_map<unsigned int, const google::protobuf::Message *, __gnu_cxx::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const google::protobuf::Message *> > >* _messageTypeToPrototypeMap;
	hash_map<const google::protobuf::Descriptor *, unsigned int, TSP::DescriptorHash, std::__1::equal_to<const google::protobuf::Descriptor *>, std::__1::allocator<std::__1::pair<const google::protobuf::Descriptor *const, unsigned int> > >* _descriptorToMessageTypeMap;
	hash_map<unsigned int, const char *, __gnu_cxx::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, const char *> > >* _messageTypeToClassnameMap;
	hash_map<unsigned int, __unsafe_unretained Class, __gnu_cxx::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, __unsafe_unretained Class> > >* _messageTypeToClassMap;

}
+(void)setInitializationHandler:(/*^block*/id)arg1 ;
+(id)sharedRegistry;
-(unsigned)messageTypeForDescriptor:(const Descriptor*)arg1 ;
-(void)registerPersistenceMessages;
-(void)setMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 descriptor:(const Descriptor*)arg3 unarchiveClassname:(const char*)arg4 ;
-(void)setUpgradeMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 unarchiveClass:(Class)arg3 ;
-(void)resetForMessageType:(unsigned)arg1 descriptor:(const Descriptor*)arg2 ;
-(void)setOverrideMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 descriptor:(const Descriptor*)arg3 ;
-(const Message*)messagePrototypeForMessageType:(unsigned)arg1 ;
-(Class)unarchiveClassForMessageType:(unsigned)arg1 ;
-(void)setOverrideMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 descriptor:(const Descriptor*)arg3 unarchiveClassname:(const char*)arg4 ;
-(void)setUpgradeMessageType:(unsigned)arg1 messagePrototype:(const Message*)arg2 unarchiveClassname:(const char*)arg3 ;
-(void)setDeprecatedMessageType:(unsigned)arg1 ;
-(id)init;
-(id)description;
@end

