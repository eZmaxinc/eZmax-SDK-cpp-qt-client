/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommunicationimage_ResponseCompound.h
 *
 * A Communicationimage Object
 */

#ifndef OAICommunicationimage_ResponseCompound_H
#define OAICommunicationimage_ResponseCompound_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommunicationimage_ResponseCompound : public OAIObject {
public:
    OAICommunicationimage_ResponseCompound();
    OAICommunicationimage_ResponseCompound(QString json);
    ~OAICommunicationimage_ResponseCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiCommunicationimageId() const;
    void setPkiCommunicationimageId(const qint32 &pki_communicationimage_id);
    bool is_pki_communicationimage_id_Set() const;
    bool is_pki_communicationimage_id_Valid() const;

    qint32 getFkiImageId() const;
    void setFkiImageId(const qint32 &fki_image_id);
    bool is_fki_image_id_Set() const;
    bool is_fki_image_id_Valid() const;

    QString getSCommunicationimageName() const;
    void setSCommunicationimageName(const QString &s_communicationimage_name);
    bool is_s_communicationimage_name_Set() const;
    bool is_s_communicationimage_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_communicationimage_id;
    bool m_pki_communicationimage_id_isSet;
    bool m_pki_communicationimage_id_isValid;

    qint32 fki_image_id;
    bool m_fki_image_id_isSet;
    bool m_fki_image_id_isValid;

    QString s_communicationimage_name;
    bool m_s_communicationimage_name_isSet;
    bool m_s_communicationimage_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommunicationimage_ResponseCompound)

#endif // OAICommunicationimage_ResponseCompound_H