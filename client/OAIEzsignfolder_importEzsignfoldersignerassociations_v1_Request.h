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
 * OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsignfoldersignerassociations
 */

#ifndef OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request_H
#define OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request_H

#include <QJsonObject>

#include <QSet>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request : public OAIObject {
public:
    OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request();
    OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request(QString json);
    ~OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QSet<qint32> getAFkiEzsignfoldersignerassociationId() const;
    void setAFkiEzsignfoldersignerassociationId(const QSet<qint32> &a_fki_ezsignfoldersignerassociation_id);
    bool is_a_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_a_fki_ezsignfoldersignerassociation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QSet<qint32> a_fki_ezsignfoldersignerassociation_id;
    bool m_a_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_a_fki_ezsignfoldersignerassociation_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request)

#endif // OAIEzsignfolder_importEzsignfoldersignerassociations_v1_Request_H
