/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIVersionhistory_ResponseCompound.h
 *
 * A Versionhistory Object
 */

#ifndef OAIVersionhistory_ResponseCompound_H
#define OAIVersionhistory_ResponseCompound_H

#include <QJsonObject>

#include "OAIField_eVersionhistoryType.h"
#include "OAIField_eVersionhistoryUsertype.h"
#include "OAIMultilingual_VersionhistoryDetail.h"
#include "OAIVersionhistory_Response.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIMultilingual_VersionhistoryDetail;

class OAIVersionhistory_ResponseCompound : public OAIObject {
public:
    OAIVersionhistory_ResponseCompound();
    OAIVersionhistory_ResponseCompound(QString json);
    ~OAIVersionhistory_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiVersionhistoryId() const;
    void setPkiVersionhistoryId(const qint32 &pki_versionhistory_id);
    bool is_pki_versionhistory_id_Set() const;
    bool is_pki_versionhistory_id_Valid() const;

    qint32 getFkiModuleId() const;
    void setFkiModuleId(const qint32 &fki_module_id);
    bool is_fki_module_id_Set() const;
    bool is_fki_module_id_Valid() const;

    qint32 getFkiModulesectionId() const;
    void setFkiModulesectionId(const qint32 &fki_modulesection_id);
    bool is_fki_modulesection_id_Set() const;
    bool is_fki_modulesection_id_Valid() const;

    QString getSModuleNameX() const;
    void setSModuleNameX(const QString &s_module_name_x);
    bool is_s_module_name_x_Set() const;
    bool is_s_module_name_x_Valid() const;

    QString getSModulesectionNameX() const;
    void setSModulesectionNameX(const QString &s_modulesection_name_x);
    bool is_s_modulesection_name_x_Set() const;
    bool is_s_modulesection_name_x_Valid() const;

    OAIField_eVersionhistoryUsertype getEVersionhistoryUsertype() const;
    void setEVersionhistoryUsertype(const OAIField_eVersionhistoryUsertype &e_versionhistory_usertype);
    bool is_e_versionhistory_usertype_Set() const;
    bool is_e_versionhistory_usertype_Valid() const;

    OAIMultilingual_VersionhistoryDetail getObjVersionhistoryDetail() const;
    void setObjVersionhistoryDetail(const OAIMultilingual_VersionhistoryDetail &obj_versionhistory_detail);
    bool is_obj_versionhistory_detail_Set() const;
    bool is_obj_versionhistory_detail_Valid() const;

    QString getDtVersionhistoryDate() const;
    void setDtVersionhistoryDate(const QString &dt_versionhistory_date);
    bool is_dt_versionhistory_date_Set() const;
    bool is_dt_versionhistory_date_Valid() const;

    QString getDtVersionhistoryDateend() const;
    void setDtVersionhistoryDateend(const QString &dt_versionhistory_dateend);
    bool is_dt_versionhistory_dateend_Set() const;
    bool is_dt_versionhistory_dateend_Valid() const;

    OAIField_eVersionhistoryType getEVersionhistoryType() const;
    void setEVersionhistoryType(const OAIField_eVersionhistoryType &e_versionhistory_type);
    bool is_e_versionhistory_type_Set() const;
    bool is_e_versionhistory_type_Valid() const;

    bool isBVersionhistoryDraft() const;
    void setBVersionhistoryDraft(const bool &b_versionhistory_draft);
    bool is_b_versionhistory_draft_Set() const;
    bool is_b_versionhistory_draft_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_versionhistory_id;
    bool m_pki_versionhistory_id_isSet;
    bool m_pki_versionhistory_id_isValid;

    qint32 fki_module_id;
    bool m_fki_module_id_isSet;
    bool m_fki_module_id_isValid;

    qint32 fki_modulesection_id;
    bool m_fki_modulesection_id_isSet;
    bool m_fki_modulesection_id_isValid;

    QString s_module_name_x;
    bool m_s_module_name_x_isSet;
    bool m_s_module_name_x_isValid;

    QString s_modulesection_name_x;
    bool m_s_modulesection_name_x_isSet;
    bool m_s_modulesection_name_x_isValid;

    OAIField_eVersionhistoryUsertype e_versionhistory_usertype;
    bool m_e_versionhistory_usertype_isSet;
    bool m_e_versionhistory_usertype_isValid;

    OAIMultilingual_VersionhistoryDetail obj_versionhistory_detail;
    bool m_obj_versionhistory_detail_isSet;
    bool m_obj_versionhistory_detail_isValid;

    QString dt_versionhistory_date;
    bool m_dt_versionhistory_date_isSet;
    bool m_dt_versionhistory_date_isValid;

    QString dt_versionhistory_dateend;
    bool m_dt_versionhistory_dateend_isSet;
    bool m_dt_versionhistory_dateend_isValid;

    OAIField_eVersionhistoryType e_versionhistory_type;
    bool m_e_versionhistory_type_isSet;
    bool m_e_versionhistory_type_isValid;

    bool b_versionhistory_draft;
    bool m_b_versionhistory_draft_isSet;
    bool m_b_versionhistory_draft_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIVersionhistory_ResponseCompound)

#endif // OAIVersionhistory_ResponseCompound_H
