/***********************************************************************
  The content of this file includes source code for the sound engine
  portion of the AUDIOKINETIC Wwise Technology and constitutes "Level
  Two Source Code" as defined in the Source Code Addendum attached
  with this file.  Any use of the Level Two Source Code shall be
  subject to the terms and conditions outlined in the Source Code
  Addendum and the End User License Agreement for Wwise(R).

  Version: v2008.2.1  Build: 2821
  Copyright (c) 2006-2008 Audiokinetic Inc.
 ***********************************************************************/


#pragma once

#include "ParameterNodeProxyLocal.h"
#include "IHierarchicalProxy.h"

class HierarchicalProxyLocal : public ParameterNodeProxyLocal
								, virtual public IHierarchicalProxy
{
public:
	virtual void AddChild( AkUniqueID in_id );
	virtual void RemoveChild( AkUniqueID in_id );
	virtual void RemoveAllChildren();

};