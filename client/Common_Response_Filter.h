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
 * Common_Response_Filter.h
 *
 * Definition of Filters for getList
 */

#ifndef Common_Response_Filter_H
#define Common_Response_Filter_H

#include <QJsonObject>

#include <QMap>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Common_Response_Filter : public Object {
public:
    Common_Response_Filter();
    Common_Response_Filter(QString json);
    ~Common_Response_Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QMap<QString, QString> getAAutoType() const;
    void setAAutoType(const QMap<QString, QString> &a_auto_type);
    bool is_a_auto_type_Set() const;
    bool is_a_auto_type_Valid() const;

    QMap<QString, QString> getAAutoTypeHaving() const;
    void setAAutoTypeHaving(const QMap<QString, QString> &a_auto_type_having);
    bool is_a_auto_type_having_Set() const;
    bool is_a_auto_type_having_Valid() const;

    QMap<QString, QMap<QString, QString>> getAEnum() const;
    void setAEnum(const QMap<QString, QMap<QString, QString>> &a_enum);
    bool is_a_enum_Set() const;
    bool is_a_enum_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QMap<QString, QString> m_a_auto_type;
    bool m_a_auto_type_isSet;
    bool m_a_auto_type_isValid;

    QMap<QString, QString> m_a_auto_type_having;
    bool m_a_auto_type_having_isSet;
    bool m_a_auto_type_having_isValid;

    QMap<QString, QMap<QString, QString>> m_a_enum;
    bool m_a_enum_isSet;
    bool m_a_enum_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Common_Response_Filter)

#endif // Common_Response_Filter_H
