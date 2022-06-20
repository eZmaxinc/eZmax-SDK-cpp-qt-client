/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatepackage_getObject_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}
 */

#ifndef OAIEzsigntemplatepackage_getObject_v1_Response_mPayload_H
#define OAIEzsigntemplatepackage_getObject_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackage_ResponseCompound.h"
#include "OAIEzsigntemplatepackagemembership_ResponseCompound.h"
#include "OAIEzsigntemplatepackagesigner_ResponseCompound.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackagesigner_ResponseCompound;
class OAIEzsigntemplatepackagemembership_ResponseCompound;

class OAIEzsigntemplatepackage_getObject_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatepackage_getObject_v1_Response_mPayload();
    OAIEzsigntemplatepackage_getObject_v1_Response_mPayload(QString json);
    ~OAIEzsigntemplatepackage_getObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatepackageId() const;
    void setPkiEzsigntemplatepackageId(const qint32 &pki_ezsigntemplatepackage_id);
    bool is_pki_ezsigntemplatepackage_id_Set() const;
    bool is_pki_ezsigntemplatepackage_id_Valid() const;

    qint32 getFkiEzsignfoldertypeId() const;
    void setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id);
    bool is_fki_ezsignfoldertype_id_Set() const;
    bool is_fki_ezsignfoldertype_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSLanguageNameX() const;
    void setSLanguageNameX(const QString &s_language_name_x);
    bool is_s_language_name_x_Set() const;
    bool is_s_language_name_x_Valid() const;

    QString getSEzsigntemplatepackageDescription() const;
    void setSEzsigntemplatepackageDescription(const QString &s_ezsigntemplatepackage_description);
    bool is_s_ezsigntemplatepackage_description_Set() const;
    bool is_s_ezsigntemplatepackage_description_Valid() const;

    bool isBEzsigntemplatepackageAdminonly() const;
    void setBEzsigntemplatepackageAdminonly(const bool &b_ezsigntemplatepackage_adminonly);
    bool is_b_ezsigntemplatepackage_adminonly_Set() const;
    bool is_b_ezsigntemplatepackage_adminonly_Valid() const;

    bool isBEzsigntemplatepackageNeedvalidation() const;
    void setBEzsigntemplatepackageNeedvalidation(const bool &b_ezsigntemplatepackage_needvalidation);
    bool is_b_ezsigntemplatepackage_needvalidation_Set() const;
    bool is_b_ezsigntemplatepackage_needvalidation_Valid() const;

    bool isBEzsigntemplatepackageIsactive() const;
    void setBEzsigntemplatepackageIsactive(const bool &b_ezsigntemplatepackage_isactive);
    bool is_b_ezsigntemplatepackage_isactive_Set() const;
    bool is_b_ezsigntemplatepackage_isactive_Valid() const;

    QString getSEzsignfoldertypeNameX() const;
    void setSEzsignfoldertypeNameX(const QString &s_ezsignfoldertype_name_x);
    bool is_s_ezsignfoldertype_name_x_Set() const;
    bool is_s_ezsignfoldertype_name_x_Valid() const;

    QList<OAIEzsigntemplatepackagesigner_ResponseCompound> getAObjEzsigntemplatepackagesigner() const;
    void setAObjEzsigntemplatepackagesigner(const QList<OAIEzsigntemplatepackagesigner_ResponseCompound> &a_obj_ezsigntemplatepackagesigner);
    bool is_a_obj_ezsigntemplatepackagesigner_Set() const;
    bool is_a_obj_ezsigntemplatepackagesigner_Valid() const;

    QList<OAIEzsigntemplatepackagemembership_ResponseCompound> getAObjEzsigntemplatepackagemembership() const;
    void setAObjEzsigntemplatepackagemembership(const QList<OAIEzsigntemplatepackagemembership_ResponseCompound> &a_obj_ezsigntemplatepackagemembership);
    bool is_a_obj_ezsigntemplatepackagemembership_Set() const;
    bool is_a_obj_ezsigntemplatepackagemembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplatepackage_id;
    bool m_pki_ezsigntemplatepackage_id_isSet;
    bool m_pki_ezsigntemplatepackage_id_isValid;

    qint32 fki_ezsignfoldertype_id;
    bool m_fki_ezsignfoldertype_id_isSet;
    bool m_fki_ezsignfoldertype_id_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString s_language_name_x;
    bool m_s_language_name_x_isSet;
    bool m_s_language_name_x_isValid;

    QString s_ezsigntemplatepackage_description;
    bool m_s_ezsigntemplatepackage_description_isSet;
    bool m_s_ezsigntemplatepackage_description_isValid;

    bool b_ezsigntemplatepackage_adminonly;
    bool m_b_ezsigntemplatepackage_adminonly_isSet;
    bool m_b_ezsigntemplatepackage_adminonly_isValid;

    bool b_ezsigntemplatepackage_needvalidation;
    bool m_b_ezsigntemplatepackage_needvalidation_isSet;
    bool m_b_ezsigntemplatepackage_needvalidation_isValid;

    bool b_ezsigntemplatepackage_isactive;
    bool m_b_ezsigntemplatepackage_isactive_isSet;
    bool m_b_ezsigntemplatepackage_isactive_isValid;

    QString s_ezsignfoldertype_name_x;
    bool m_s_ezsignfoldertype_name_x_isSet;
    bool m_s_ezsignfoldertype_name_x_isValid;

    QList<OAIEzsigntemplatepackagesigner_ResponseCompound> a_obj_ezsigntemplatepackagesigner;
    bool m_a_obj_ezsigntemplatepackagesigner_isSet;
    bool m_a_obj_ezsigntemplatepackagesigner_isValid;

    QList<OAIEzsigntemplatepackagemembership_ResponseCompound> a_obj_ezsigntemplatepackagemembership;
    bool m_a_obj_ezsigntemplatepackagemembership_isSet;
    bool m_a_obj_ezsigntemplatepackagemembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackage_getObject_v1_Response_mPayload)

#endif // OAIEzsigntemplatepackage_getObject_v1_Response_mPayload_H
