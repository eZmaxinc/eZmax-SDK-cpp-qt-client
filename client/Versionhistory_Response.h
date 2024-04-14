/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Versionhistory_Response.h
 *
 * A Versionhistory Object
 */

#ifndef Versionhistory_Response_H
#define Versionhistory_Response_H

#include <QJsonObject>

#include "Field_eVersionhistoryType.h"
#include "Field_eVersionhistoryUsertype.h"
#include "Multilingual_VersionhistoryDetail.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Multilingual_VersionhistoryDetail;

class Versionhistory_Response : public Object {
public:
    Versionhistory_Response();
    Versionhistory_Response(QString json);
    ~Versionhistory_Response() override;

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

    Field_eVersionhistoryUsertype getEVersionhistoryUsertype() const;
    void setEVersionhistoryUsertype(const Field_eVersionhistoryUsertype &e_versionhistory_usertype);
    bool is_e_versionhistory_usertype_Set() const;
    bool is_e_versionhistory_usertype_Valid() const;

    Multilingual_VersionhistoryDetail getObjVersionhistoryDetail() const;
    void setObjVersionhistoryDetail(const Multilingual_VersionhistoryDetail &obj_versionhistory_detail);
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

    Field_eVersionhistoryType getEVersionhistoryType() const;
    void setEVersionhistoryType(const Field_eVersionhistoryType &e_versionhistory_type);
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

    qint32 m_pki_versionhistory_id;
    bool m_pki_versionhistory_id_isSet;
    bool m_pki_versionhistory_id_isValid;

    qint32 m_fki_module_id;
    bool m_fki_module_id_isSet;
    bool m_fki_module_id_isValid;

    qint32 m_fki_modulesection_id;
    bool m_fki_modulesection_id_isSet;
    bool m_fki_modulesection_id_isValid;

    QString m_s_module_name_x;
    bool m_s_module_name_x_isSet;
    bool m_s_module_name_x_isValid;

    QString m_s_modulesection_name_x;
    bool m_s_modulesection_name_x_isSet;
    bool m_s_modulesection_name_x_isValid;

    Field_eVersionhistoryUsertype m_e_versionhistory_usertype;
    bool m_e_versionhistory_usertype_isSet;
    bool m_e_versionhistory_usertype_isValid;

    Multilingual_VersionhistoryDetail m_obj_versionhistory_detail;
    bool m_obj_versionhistory_detail_isSet;
    bool m_obj_versionhistory_detail_isValid;

    QString m_dt_versionhistory_date;
    bool m_dt_versionhistory_date_isSet;
    bool m_dt_versionhistory_date_isValid;

    QString m_dt_versionhistory_dateend;
    bool m_dt_versionhistory_dateend_isSet;
    bool m_dt_versionhistory_dateend_isValid;

    Field_eVersionhistoryType m_e_versionhistory_type;
    bool m_e_versionhistory_type_isSet;
    bool m_e_versionhistory_type_isValid;

    bool m_b_versionhistory_draft;
    bool m_b_versionhistory_draft_isSet;
    bool m_b_versionhistory_draft_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Versionhistory_Response)

#endif // Versionhistory_Response_H
