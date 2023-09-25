/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfolder_importEzsignfoldersignerassociations_v1_Request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/importEzsignfoldersignerassociations
 */

#ifndef Ezsignfolder_importEzsignfoldersignerassociations_v1_Request_H
#define Ezsignfolder_importEzsignfoldersignerassociations_v1_Request_H

#include <QJsonObject>

#include <QSet>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfolder_importEzsignfoldersignerassociations_v1_Request : public Object {
public:
    Ezsignfolder_importEzsignfoldersignerassociations_v1_Request();
    Ezsignfolder_importEzsignfoldersignerassociations_v1_Request(QString json);
    ~Ezsignfolder_importEzsignfoldersignerassociations_v1_Request() override;

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

    QSet<qint32> m_a_fki_ezsignfoldersignerassociation_id;
    bool m_a_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_a_fki_ezsignfoldersignerassociation_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfolder_importEzsignfoldersignerassociations_v1_Request)

#endif // Ezsignfolder_importEzsignfoldersignerassociations_v1_Request_H
