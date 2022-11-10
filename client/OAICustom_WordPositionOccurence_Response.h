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
 * OAICustom_WordPositionOccurence_Response.h
 *
 * A Word Position Object
 */

#ifndef OAICustom_WordPositionOccurence_Response_H
#define OAICustom_WordPositionOccurence_Response_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICustom_WordPositionOccurence_Response : public OAIObject {
public:
    OAICustom_WordPositionOccurence_Response();
    OAICustom_WordPositionOccurence_Response(QString json);
    ~OAICustom_WordPositionOccurence_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIPage() const;
    void setIPage(const qint32 &i_page);
    bool is_i_page_Set() const;
    bool is_i_page_Valid() const;

    qint32 getIX() const;
    void setIX(const qint32 &i_x);
    bool is_i_x_Set() const;
    bool is_i_x_Valid() const;

    qint32 getIY() const;
    void setIY(const qint32 &i_y);
    bool is_i_y_Set() const;
    bool is_i_y_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 i_page;
    bool m_i_page_isSet;
    bool m_i_page_isValid;

    qint32 i_x;
    bool m_i_x_isSet;
    bool m_i_x_isValid;

    qint32 i_y;
    bool m_i_y_isSet;
    bool m_i_y_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_WordPositionOccurence_Response)

#endif // OAICustom_WordPositionOccurence_Response_H
