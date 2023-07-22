/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response.h
 *
 * An Ezsignsignature Object in the context of an EzsignsignaturesAutomatic path
 */

#ifndef OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response_H
#define OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response_H

#include <QJsonObject>

#include "OAIField_eEzsignsignatureType.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response : public OAIObject {
public:
    OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response();
    OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response(QString json);
    ~OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignatureId() const;
    void setPkiEzsignsignatureId(const qint32 &pki_ezsignsignature_id);
    bool is_pki_ezsignsignature_id_Set() const;
    bool is_pki_ezsignsignature_id_Valid() const;

    OAIField_eEzsignsignatureType getEEzsignsignatureType() const;
    void setEEzsignsignatureType(const OAIField_eEzsignsignatureType &e_ezsignsignature_type);
    bool is_e_ezsignsignature_type_Set() const;
    bool is_e_ezsignsignature_type_Valid() const;

    qint32 getIEzsignpagePagenumber() const;
    void setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber);
    bool is_i_ezsignpage_pagenumber_Set() const;
    bool is_i_ezsignpage_pagenumber_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignsignature_id;
    bool m_pki_ezsignsignature_id_isSet;
    bool m_pki_ezsignsignature_id_isValid;

    OAIField_eEzsignsignatureType e_ezsignsignature_type;
    bool m_e_ezsignsignature_type_isSet;
    bool m_e_ezsignsignature_type_isValid;

    qint32 i_ezsignpage_pagenumber;
    bool m_i_ezsignpage_pagenumber_isSet;
    bool m_i_ezsignpage_pagenumber_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response)

#endif // OAICustom_EzsignsignatureEzsignsignaturesAutomatic_Response_H