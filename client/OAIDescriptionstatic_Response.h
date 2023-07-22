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
 * OAIDescriptionstatic_Response.h
 *
 * A Descriptionstatic Object
 */

#ifndef OAIDescriptionstatic_Response_H
#define OAIDescriptionstatic_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIDescriptionstatic_Response : public OAIObject {
public:
    OAIDescriptionstatic_Response();
    OAIDescriptionstatic_Response(QString json);
    ~OAIDescriptionstatic_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiDescriptionstaticId() const;
    void setPkiDescriptionstaticId(const qint32 &pki_descriptionstatic_id);
    bool is_pki_descriptionstatic_id_Set() const;
    bool is_pki_descriptionstatic_id_Valid() const;

    QString getSDescriptionstaticDescription() const;
    void setSDescriptionstaticDescription(const QString &s_descriptionstatic_description);
    bool is_s_descriptionstatic_description_Set() const;
    bool is_s_descriptionstatic_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_descriptionstatic_id;
    bool m_pki_descriptionstatic_id_isSet;
    bool m_pki_descriptionstatic_id_isValid;

    QString s_descriptionstatic_description;
    bool m_s_descriptionstatic_description_isSet;
    bool m_s_descriptionstatic_description_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDescriptionstatic_Response)

#endif // OAIDescriptionstatic_Response_H
