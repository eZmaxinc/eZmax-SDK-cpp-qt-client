/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzmaxinvoicing_ResponseCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzmaxinvoicing_ResponseCompound_allOf_H
#define OAIEzmaxinvoicing_ResponseCompound_allOf_H

#include <QJsonObject>

#include "OAICustom_EzmaxinvoicingEzsigndocument_Response.h"
#include "OAICustom_EzmaxinvoicingEzsignfolder_Response.h"
#include "OAICustom_Ezmaxpricing_Response.h"
#include "OAIEzmaxinvoicingagent_ResponseCompound.h"
#include "OAIEzmaxinvoicingcontract_ResponseCompound.h"
#include "OAIEzmaxinvoicingsummaryexternal_ResponseCompound.h"
#include "OAIEzmaxinvoicingsummaryglobal_ResponseCompound.h"
#include "OAIEzmaxinvoicingsummaryinternal_ResponseCompound.h"
#include "OAIEzmaxinvoicinguser_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzmaxinvoicingcontract_ResponseCompound;
class OAICustom_Ezmaxpricing_Response;
class OAIEzmaxinvoicingsummaryglobal_ResponseCompound;
class OAIEzmaxinvoicingsummaryexternal_ResponseCompound;
class OAIEzmaxinvoicingsummaryinternal_ResponseCompound;
class OAIEzmaxinvoicingagent_ResponseCompound;
class OAIEzmaxinvoicinguser_ResponseCompound;
class OAICustom_EzmaxinvoicingEzsignfolder_Response;
class OAICustom_EzmaxinvoicingEzsigndocument_Response;

class OAIEzmaxinvoicing_ResponseCompound_allOf : public OAIObject {
public:
    OAIEzmaxinvoicing_ResponseCompound_allOf();
    OAIEzmaxinvoicing_ResponseCompound_allOf(QString json);
    ~OAIEzmaxinvoicing_ResponseCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzmaxinvoicingcontract_ResponseCompound getObjEzmaxinvoicingcontract() const;
    void setObjEzmaxinvoicingcontract(const OAIEzmaxinvoicingcontract_ResponseCompound &obj_ezmaxinvoicingcontract);
    bool is_obj_ezmaxinvoicingcontract_Set() const;
    bool is_obj_ezmaxinvoicingcontract_Valid() const;

    OAICustom_Ezmaxpricing_Response getObjEzmaxpricing() const;
    void setObjEzmaxpricing(const OAICustom_Ezmaxpricing_Response &obj_ezmaxpricing);
    bool is_obj_ezmaxpricing_Set() const;
    bool is_obj_ezmaxpricing_Valid() const;

    QList<OAIEzmaxinvoicingsummaryglobal_ResponseCompound> getAObjEzmaxinvoicingsummaryglobal() const;
    void setAObjEzmaxinvoicingsummaryglobal(const QList<OAIEzmaxinvoicingsummaryglobal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryglobal);
    bool is_a_obj_ezmaxinvoicingsummaryglobal_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryglobal_Valid() const;

    QList<OAIEzmaxinvoicingsummaryexternal_ResponseCompound> getAObjEzmaxinvoicingsummaryexternal() const;
    void setAObjEzmaxinvoicingsummaryexternal(const QList<OAIEzmaxinvoicingsummaryexternal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryexternal);
    bool is_a_obj_ezmaxinvoicingsummaryexternal_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryexternal_Valid() const;

    QList<OAIEzmaxinvoicingsummaryinternal_ResponseCompound> getAObjEzmaxinvoicingsummaryinternal() const;
    void setAObjEzmaxinvoicingsummaryinternal(const QList<OAIEzmaxinvoicingsummaryinternal_ResponseCompound> &a_obj_ezmaxinvoicingsummaryinternal);
    bool is_a_obj_ezmaxinvoicingsummaryinternal_Set() const;
    bool is_a_obj_ezmaxinvoicingsummaryinternal_Valid() const;

    QList<OAIEzmaxinvoicingagent_ResponseCompound> getAObjEzmaxinvoicingagent() const;
    void setAObjEzmaxinvoicingagent(const QList<OAIEzmaxinvoicingagent_ResponseCompound> &a_obj_ezmaxinvoicingagent);
    bool is_a_obj_ezmaxinvoicingagent_Set() const;
    bool is_a_obj_ezmaxinvoicingagent_Valid() const;

    QList<OAIEzmaxinvoicinguser_ResponseCompound> getAObjEzmaxinvoicinguser() const;
    void setAObjEzmaxinvoicinguser(const QList<OAIEzmaxinvoicinguser_ResponseCompound> &a_obj_ezmaxinvoicinguser);
    bool is_a_obj_ezmaxinvoicinguser_Set() const;
    bool is_a_obj_ezmaxinvoicinguser_Valid() const;

    QList<OAICustom_EzmaxinvoicingEzsignfolder_Response> getAObjEzmaxinvoicingezsignfolder() const;
    void setAObjEzmaxinvoicingezsignfolder(const QList<OAICustom_EzmaxinvoicingEzsignfolder_Response> &a_obj_ezmaxinvoicingezsignfolder);
    bool is_a_obj_ezmaxinvoicingezsignfolder_Set() const;
    bool is_a_obj_ezmaxinvoicingezsignfolder_Valid() const;

    QList<OAICustom_EzmaxinvoicingEzsigndocument_Response> getAObjEzmaxinvoicingezsigndocument() const;
    void setAObjEzmaxinvoicingezsigndocument(const QList<OAICustom_EzmaxinvoicingEzsigndocument_Response> &a_obj_ezmaxinvoicingezsigndocument);
    bool is_a_obj_ezmaxinvoicingezsigndocument_Set() const;
    bool is_a_obj_ezmaxinvoicingezsigndocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzmaxinvoicingcontract_ResponseCompound obj_ezmaxinvoicingcontract;
    bool m_obj_ezmaxinvoicingcontract_isSet;
    bool m_obj_ezmaxinvoicingcontract_isValid;

    OAICustom_Ezmaxpricing_Response obj_ezmaxpricing;
    bool m_obj_ezmaxpricing_isSet;
    bool m_obj_ezmaxpricing_isValid;

    QList<OAIEzmaxinvoicingsummaryglobal_ResponseCompound> a_obj_ezmaxinvoicingsummaryglobal;
    bool m_a_obj_ezmaxinvoicingsummaryglobal_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryglobal_isValid;

    QList<OAIEzmaxinvoicingsummaryexternal_ResponseCompound> a_obj_ezmaxinvoicingsummaryexternal;
    bool m_a_obj_ezmaxinvoicingsummaryexternal_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryexternal_isValid;

    QList<OAIEzmaxinvoicingsummaryinternal_ResponseCompound> a_obj_ezmaxinvoicingsummaryinternal;
    bool m_a_obj_ezmaxinvoicingsummaryinternal_isSet;
    bool m_a_obj_ezmaxinvoicingsummaryinternal_isValid;

    QList<OAIEzmaxinvoicingagent_ResponseCompound> a_obj_ezmaxinvoicingagent;
    bool m_a_obj_ezmaxinvoicingagent_isSet;
    bool m_a_obj_ezmaxinvoicingagent_isValid;

    QList<OAIEzmaxinvoicinguser_ResponseCompound> a_obj_ezmaxinvoicinguser;
    bool m_a_obj_ezmaxinvoicinguser_isSet;
    bool m_a_obj_ezmaxinvoicinguser_isValid;

    QList<OAICustom_EzmaxinvoicingEzsignfolder_Response> a_obj_ezmaxinvoicingezsignfolder;
    bool m_a_obj_ezmaxinvoicingezsignfolder_isSet;
    bool m_a_obj_ezmaxinvoicingezsignfolder_isValid;

    QList<OAICustom_EzmaxinvoicingEzsigndocument_Response> a_obj_ezmaxinvoicingezsigndocument;
    bool m_a_obj_ezmaxinvoicingezsigndocument_isSet;
    bool m_a_obj_ezmaxinvoicingezsigndocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzmaxinvoicing_ResponseCompound_allOf)

#endif // OAIEzmaxinvoicing_ResponseCompound_allOf_H
